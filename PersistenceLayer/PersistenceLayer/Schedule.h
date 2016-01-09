//
//  Schedule.h
//  PersistenceLayer
//
//  Created by zyn on 16/1/9.
//  Copyright © 2016年 zyn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Events.h"

@interface Schedule : NSObject

@property(nonatomic,assign) NSInteger scheduleID;
@property(nonatomic,strong) NSString *gameDate;
@property(nonatomic,strong) NSString *gameTime;
@property(nonatomic,strong) NSString *gameInfo;
@property(nonatomic,strong) Events *event;
@end
