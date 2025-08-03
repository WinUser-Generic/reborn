using gamecontroller.Middleware;
using gamecontroller.Services;
using gamecontroller.Singletons;

var builder = WebApplication.CreateBuilder(args);

// Add services to the container.

builder.Services.AddControllers();

builder.Services.AddScoped<AuthService>();

builder.Services.AddScoped<PlayerAuthActionFilter>();

builder.Services.AddSingleton<GameSessions>();

builder.Services.AddSingleton<DatabaseSessions>();

builder.Services.AddSingleton<LobbySingleton>();

builder.Services.AddSingleton<StinkyWordService>();

builder.Services.AddHostedService<SessionCleanupService>();

builder.Services.AddHostedService<MatchLaunchService>();

var app = builder.Build();

// Configure the HTTP request pipeline.

app.UseHttpsRedirection();

app.UseAuthorization();

app.UseWebSockets();

app.MapControllers();

app.Run();
