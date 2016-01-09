//
//  EventsDAO.h
//  PersistenceLayer
//
//  Created by zyn on 16/1/9.
//  Copyright © 2016年 zyn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Events.h"
@interface EventsDAO : NSObject

-(int)create:(Events*)model;
-(int)remove:(Events*)model;
-(int)modify:(Events*)model;
-(NSMutableArray*)findAll;
-(Events*)findById:(Events*)model;
@end
