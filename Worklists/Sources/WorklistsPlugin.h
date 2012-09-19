//
//  WorklistsPlugin.h
//  Worklists
//
//  Created by Alessandro Volz on 09/11/2012.
//  Copyright 2012 OsiriX Team. All rights reserved.
//

#import <OsiriXAPI/PluginFilter.h>


@class Worklist;


extern NSString* const WorklistsDefaultsKey;


@interface WorklistsPlugin : PluginFilter {
    NSArrayController* _worklists; // this is binded to the NSUserDefaults array of dictionaries
    NSMutableDictionary* _worklistObjs;
    NSMutableDictionary* _errors;
}

@property(readonly,retain) NSArrayController* worklists;

+ (WorklistsPlugin*)instance;

- (void)deselectAlbumOfWorklist:(Worklist*)worklist;

- (void)setError:(id)error onWorklist:(Worklist*)worklist;
- (void)clearErrorOnWorklist:(Worklist*)worklist;

@end
