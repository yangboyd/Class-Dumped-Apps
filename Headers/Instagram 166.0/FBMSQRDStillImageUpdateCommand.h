//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBFilterCommand-Protocol.h>

@class NSString;

@interface FBMSQRDStillImageUpdateCommand : NSObject <FBFilterCommand>
{
    _Bool _stillImageModeEnabled;
    _Bool _skipServiceHostUpdating;
}

+ (id)newWithStillImageModeEnabled:(_Bool)arg1 skipServiceHostUpdating:(_Bool)arg2;
+ (id)newWithStillImageModeEnabled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool skipServiceHostUpdating; // @synthesize skipServiceHostUpdating=_skipServiceHostUpdating;
@property(readonly, nonatomic) _Bool stillImageModeEnabled; // @synthesize stillImageModeEnabled=_stillImageModeEnabled;
@property(readonly, copy, nonatomic) NSString *filterClass;
- (id)initWithStillImageModeEnabled:(_Bool)arg1 skipServiceHostUpdating:(_Bool)arg2;
- (id)initWithStillImageModeEnabled:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

