//
//  xmlBuilder.h
//  Builder
//
//  Created by 陈栋楠 on 2016/11/30.
//  Copyright © 2016年 陈栋楠. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "builderInterface.h"
@interface xmlBuilder : NSObject<builderInterface>
- (instancetype)initWithData :(NSString *)data;
@end
