//
//  HelloWorldLayer.h
//  sumo
//
//  Created by App on 2011/10/17.
//  Copyright __MyCompanyName__ 2011年. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreAudio/CoreAudioTypes.h>


// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{    
    // ask director the the window size
    CGSize screenSize;
    AVAudioRecorder *recorder;
    NSTimer *levelTimer;
    double lowPassResults;
    int highValue;
    UILabel *level;
    CCSprite *bg;
    CCSprite *sumo_com_push;
    CCSprite *sumo_com_ready;
    CCSprite *sumo_user_ready;
    CCSprite *sumo_user_ready2;
    CCSprite *sumo_user_push;

//    CCSprite *VSdV;
//    CCSprite *VSdPoint;
//    CCSprite *VSdS;
    
    CCSprite *voiceLine_r;
    CCSprite *voiceLine_com_r;
    
    CCLabelTTF *score1;
    CCLabelTTF *score2;
    CCLabelTTF *timeTest;
    CCLabelTTF *dis;
    CCLabelTTF *gameResult;
    CCBlink *gameResultBlink;
    
    int i;
    int distancePointer;
    CCSprite *animatingChicken;
    CCMenu *playAgainMenu;
    



}

-(void)initWithPlay;
-(void)levelTimerCallback:(NSTimer *)timer;
-(void)blowStart;
-(void)playSumoAgain:(id)sender;

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;
-(void) winOrLose:(int)sender;
@end
