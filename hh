local player = game.Players.LocalPlayer
local UserInputService = game:GetService("UserInputService")

local toggle = false

UserInputService.InputBegan:Connect(function(input, gameProcessedEvent)
    if input.KeyCode == Enum.KeyCode.Z then
      toggle = not toggle
      wait(1)
    end
end)

game:GetService("RunService").Heartbeat:Connect(function(step)
  if toggle then
    for _,plr in pairs(game:GetService("Players"):GetPlayers()) do
      plr.BlockingNew2.Value = not toggle
    end
  end
end)
