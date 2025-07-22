using System;
using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace gamecontroller.Migrations
{
    /// <inheritdoc />
    public partial class InitialCreate : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.CreateTable(
                name: "Logs",
                columns: table => new
                {
                    MatchGUID = table.Column<string>(type: "TEXT", nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_Logs", x => x.MatchGUID);
                });

            migrationBuilder.CreateTable(
                name: "TelemetryEvent",
                columns: table => new
                {
                    Timestamp = table.Column<DateTime>(type: "TEXT", nullable: false),
                    EventName = table.Column<string>(type: "TEXT", nullable: false),
                    IsError = table.Column<bool>(type: "INTEGER", nullable: false),
                    TelemetryMatchLogsMatchGUID = table.Column<string>(type: "TEXT", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_TelemetryEvent", x => x.Timestamp);
                    table.ForeignKey(
                        name: "FK_TelemetryEvent_Logs_TelemetryMatchLogsMatchGUID",
                        column: x => x.TelemetryMatchLogsMatchGUID,
                        principalTable: "Logs",
                        principalColumn: "MatchGUID");
                });

            migrationBuilder.CreateTable(
                name: "TelemetrySnapshot",
                columns: table => new
                {
                    Timestamp = table.Column<DateTime>(type: "TEXT", nullable: false),
                    TargetTickrate = table.Column<float>(type: "REAL", nullable: false),
                    EffectiveTickrate = table.Column<float>(type: "REAL", nullable: false),
                    ReplicationFNames = table.Column<string>(type: "TEXT", nullable: false),
                    PlayersConnected = table.Column<int>(type: "INTEGER", nullable: false),
                    MaxPlayers = table.Column<int>(type: "INTEGER", nullable: false),
                    MemoryUsageMB = table.Column<int>(type: "INTEGER", nullable: false),
                    TelemetryMatchLogsMatchGUID = table.Column<string>(type: "TEXT", nullable: true)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_TelemetrySnapshot", x => x.Timestamp);
                    table.ForeignKey(
                        name: "FK_TelemetrySnapshot_Logs_TelemetryMatchLogsMatchGUID",
                        column: x => x.TelemetryMatchLogsMatchGUID,
                        principalTable: "Logs",
                        principalColumn: "MatchGUID");
                });

            migrationBuilder.CreateIndex(
                name: "IX_TelemetryEvent_TelemetryMatchLogsMatchGUID",
                table: "TelemetryEvent",
                column: "TelemetryMatchLogsMatchGUID");

            migrationBuilder.CreateIndex(
                name: "IX_TelemetrySnapshot_TelemetryMatchLogsMatchGUID",
                table: "TelemetrySnapshot",
                column: "TelemetryMatchLogsMatchGUID");
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropTable(
                name: "TelemetryEvent");

            migrationBuilder.DropTable(
                name: "TelemetrySnapshot");

            migrationBuilder.DropTable(
                name: "Logs");
        }
    }
}
