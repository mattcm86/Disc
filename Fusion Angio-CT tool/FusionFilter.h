//
//  FusionFilter.h
//  Fusion
//
//  Created by rossetantoine on Wed Jun 09 2004.
//  Copyright (c) 2004 Antoine Rosset. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PluginFilter.h"

@interface FusionFilter : PluginFilter {

}

- (long) filterImage:(NSString*) menuName;

@end
