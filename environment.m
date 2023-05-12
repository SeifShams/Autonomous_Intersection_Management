obsInfo = rlNumericSpec([2 1]);
actInfo = rlNumericSpec([1 1],"UpperLimit",0.7,"LowerLimit",0);

env = rlSimulinkEnv("untitled","untitled/RL Agent",obsInfo,actInfo);
%% 


% actnet = [featureInputLayer(2,"Name","obs")
%     fullyConnectedLayer(400,"Name","fc1")
%     reluLayer("Name","relu1")
%     fullyConnectedLayer(300,"Name","fc2")
%     reluLayer("Name","relu2")
%     fullyConnectedLayer(1,"Name","fc3")
%     %tanhLayer("Name","scact") ??
%     sigmoidLayer('Name', 'sigmoid')
%     scalingLayer('Name', 'output', 'Scale', 0.7)
%     ];
% actnet = dlnetwork(actnet);
% 
% actorOptions = rlOptimizerOptions( ...
%     Optimizer="adam", ...
%     LearnRate=1e-3,...
%     GradientThreshold=1, ...
%     L2RegularizationFactor=1e-5);
% 
% actor = rlContinuousDeterministicActor(actnet,obsInfo,actInfo,"Observation","obs","Action","fc3",actorOptions);
% %% 
% 
% 
% %{
% criticnet = [featureInputLayer(4,"Name","obs")
%     fullyConnectedLayer(400,"Name","fc1")
%     reluLayer("Name","relu1")
%     fullyConnectedLayer(300,"Name","fc2")
%     reluLayer("Name","relu2")
%     fullyConnectedLayer(1,"Name","fc3")
%     ]; 
% %}
% 
% % Observation path
% obsPath = [
%     featureInputLayer(4,Name="obsPathIn")
%     fullyConnectedLayer(32)
%     reluLayer
%     fullyConnectedLayer(16,Name="obsPathOut")
%     ];
% 
% % Action path
% actPath = [
%     featureInputLayer(1,Name="actPathIn")
%     fullyConnectedLayer(32)
%     reluLayer
%     fullyConnectedLayer(16,Name="actPathOut")
%     ];
% 
% % Common path
% commonPath = [
%     concatenationLayer(1,2,Name="concat")
%     reluLayer
%     fullyConnectedLayer(1)
%     ];
% 
% % Add layers to layergraph object
% criticNet = layerGraph;
% criticNet = addLayers(criticNet,obsPath);
% criticNet = addLayers(criticNet,actPath);
% criticNet = addLayers(criticNet,commonPath);
% 
% % Connect layers
% criticNet = connectLayers(criticNet,"obsPathOut","concat/in1");
% criticNet = connectLayers(criticNet,"actPathOut","concat/in2");
% 
% criticOptions = rlOptimizerOptions( ...
%     Optimizer="adam", ...
%     LearnRate=1e-3,... 
%     GradientThreshold=1, ...
%     L2RegularizationFactor=2e-4);
% 
% criticNet1 = dlnetwork(criticNet);
% criticNet2 = dlnetwork(criticNet);
% 
% %critic = rlQValueFunction(criticnet,obsInfo,actInfo,"Observation","obs","Action","act",criticOptions);
% %specify a two-element row vector of critic.
% %critics = [critic critic];
% 
% critic1 = rlQValueFunction(criticNet1,obsInfo,actInfo);
% critic2 = rlQValueFunction(criticNet2,obsInfo,actInfo);
% %% 
% 
% agentOptions = rlTD3AgentOptions;
% agentOptions.ExperienceBufferLength = 1e6;
% agentOptions.MiniBatchSize = 128;
% agentOptions.DiscountFactor = 0.99;
% agentOptions.TargetSmoothFactor = 5e-3;
% agentOptions.TargetPolicySmoothModel.Variance = 0.2;
% agentOptions.TargetPolicySmoothModel.LowerLimit = -0.5;
% agentOptions.TargetPolicySmoothModel.UpperLimit = 0.5;
% agentOptions.CriticOptimizerOptions = criticOptions;
% agentOptions.ActorOptimizerOptions = actorOptions;
% %% 
% 
% agent = rlTD3Agent(actor,[critic1 critic2],agentOptions);
% 
% opts = rlTrainingOptions( ...
%         "MaxStepsPerEpisode",maxsteps, ... 
%         "MaxEpisodes",50000, ...
%         "ScoreAveragingWindowLength",50, ...
%         "StopTrainingCriteria","AverageReward", ...
%         "StopTrainingValue",2);
%     info = train(agent,env,opts);
