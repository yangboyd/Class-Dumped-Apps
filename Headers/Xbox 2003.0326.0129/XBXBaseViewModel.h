//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XBXBaseViewModel : NSObject
{
    int _dataState;
    id _launchContext;
}

+ (id)allocForId:(id)arg1;
@property(retain, nonatomic) id launchContext; // @synthesize launchContext=_launchContext;
@property(nonatomic) int dataState; // @synthesize dataState=_dataState;
- (void).cxx_destruct;
- (_Bool)isValidStateTransitionWithState:(int)arg1 withNewState:(int)arg2 andOldState:(int)arg3;

@end

