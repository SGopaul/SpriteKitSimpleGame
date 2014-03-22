//
//  MyScene.h
//  SpriteKitSimpleGame
//

//  Copyright (c) 2014 Stephan Gopaul. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface MyScene : SKScene <SKPhysicsContactDelegate>

@property (nonatomic) SKSpriteNode *player;
@property (nonatomic) NSTimeInterval lastSpawnTimeInterval, lastUpdateTimeInterval;
@property (nonatomic) int monsterDestroyed;

@end
