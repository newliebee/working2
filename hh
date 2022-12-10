local player = game.Players.LocalPlayer
local UserInputService = game:GetService("UserInputService")

local enabled = false

getgenv()["IrisAd"] = true

Script: local function callback(Text)
 if Text == "okay" then
  print ("Answer")
elseif Text == ("nigga") then
 print ("Answer2")
 end
end

local NotificationBindable = Instance.new("BindableFunction")
NotificationBindable.OnInvoke = callback
--
game.StarterGui:SetCore("SendNotification",  {
 Title = "Shield bypass is loaded";
 Text = "Toggle Key is Z";
 Icon = "";
 Duration = 5;
 Button1 = "okay";
 Button2 = "nigga";
 Callback = NotificationBindable;
})

UserInputService.InputBegan:Connect(function(input, gameProcessedEvent)
    if UserInputService:IsKeyDown(Enum.KeyCode.Z) then
      enabled = not(enabled)
      wait(1)
    end
end)

game:GetService("RunService").Heartbeat:Connect(function(step)
  if enabled == true then
    for _,plr in pairs(game:GetService("Players"):GetPlayers()) do
      plr.BlockingNew2.Value = not(enabled)
    end
  end
end);


