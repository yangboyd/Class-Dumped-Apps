//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHTCommitObserver.h"

@class GoogleBreakpadController, NSObject<OS_dispatch_queue>, NSString;

@interface PHTBreakpadDecorator : NSObject <PHTCommitObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_packageName;
    NSString *_parameterKey;
    GoogleBreakpadController *_breakpadController;
    id <PHTPhenotype> _phenotype;
    _Bool _observerAdded;
    _Bool _started;
}

- (void).cxx_destruct;
- (void)didCommitWithPhenotype:(id)arg1 packageName:(id)arg2 configuration:(id)arg3;
- (void)stopAttachingExperimentIDs;
- (void)attachExperimentIDs;
- (id)initWithPackage:(id)arg1 phenotype:(id)arg2 breakpadController:(id)arg3;

@end

