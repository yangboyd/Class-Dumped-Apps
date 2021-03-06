//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEShareBaseStage.h"

@class NSString;

@interface AWEShareCustomStage : AWEShareBaseStage
{
    NSString *_name;
    CDUnknownBlockType _runHandler;
    CDUnknownBlockType _preparationHandler;
    CDUnknownBlockType _asyncPreparationHandler;
}

+ (id)stageWithName:(id)arg1 asyncPreparationHandler:(CDUnknownBlockType)arg2;
+ (id)stageWithName:(id)arg1 preparationHandler:(CDUnknownBlockType)arg2;
+ (id)stageWithName:(id)arg1 runHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType asyncPreparationHandler; // @synthesize asyncPreparationHandler=_asyncPreparationHandler;
@property(copy, nonatomic) CDUnknownBlockType preparationHandler; // @synthesize preparationHandler=_preparationHandler;
@property(copy, nonatomic) CDUnknownBlockType runHandler; // @synthesize runHandler=_runHandler;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)run;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)prepareBeforeRunWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)prepareBeforeRun;
- (id)initWithName:(id)arg1;

@end

