//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString;

@interface HTSShareActivityCompletionHandler : NSObject
{
    _Bool _completed;
    CDUnknownBlockType _finalCompletion;
    NSString *_activityType;
    NSError *_activityError;
    NSArray *_returnedItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *returnedItems; // @synthesize returnedItems=_returnedItems;
@property(retain, nonatomic) NSError *activityError; // @synthesize activityError=_activityError;
@property(copy, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(copy, nonatomic) CDUnknownBlockType finalCompletion; // @synthesize finalCompletion=_finalCompletion;
- (void)dealloc;
- (void)completeWithActivityType:(id)arg1 completed:(_Bool)arg2 returnedItems:(id)arg3 activityError:(id)arg4;
- (id)initWithActivityViewController:(id)arg1;

@end

