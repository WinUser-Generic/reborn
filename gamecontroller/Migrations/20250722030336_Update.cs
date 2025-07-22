using Microsoft.EntityFrameworkCore.Migrations;

#nullable disable

namespace gamecontroller.Migrations
{
    /// <inheritdoc />
    public partial class Update : Migration
    {
        /// <inheritdoc />
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<string>(
                name: "MatchGUID",
                table: "TelemetrySnapshot",
                type: "TEXT",
                nullable: false,
                defaultValue: "");

            migrationBuilder.AddColumn<string>(
                name: "MatchGUID",
                table: "TelemetryEvent",
                type: "TEXT",
                nullable: false,
                defaultValue: "");
        }

        /// <inheritdoc />
        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "MatchGUID",
                table: "TelemetrySnapshot");

            migrationBuilder.DropColumn(
                name: "MatchGUID",
                table: "TelemetryEvent");
        }
    }
}
