//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBFilterCommand-Protocol.h>

@class NSArray, NSString;

@interface FBMotionFilterUpdateCommand : NSObject <FBFilterCommand>
{
    _Bool _shouldRestartLoop;
    _Bool _shouldShowStaticImage;
    NSArray *_positionNodes;
    NSArray *_timingNodes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowStaticImage; // @synthesize shouldShowStaticImage=_shouldShowStaticImage;
@property(readonly, nonatomic) _Bool shouldRestartLoop; // @synthesize shouldRestartLoop=_shouldRestartLoop;
@property(readonly, copy, nonatomic) NSArray *timingNodes; // @synthesize timingNodes=_timingNodes;
@property(readonly, copy, nonatomic) NSArray *positionNodes; // @synthesize positionNodes=_positionNodes;
@property(readonly, copy, nonatomic) NSString *filterClass;
- (id)initWithPositionNodes:(id)arg1 timingNodes:(id)arg2 shouldRestartLoop:(_Bool)arg3 shouldShowStaticImage:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

