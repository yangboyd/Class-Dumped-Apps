//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARTrackingControlling-Protocol.h>

@class NSString;
@protocol FBARServiceHosting;

@interface FBARTrackingController : NSObject <FBARTrackingControlling>
{
    id <FBARServiceHosting> _serviceHost;
    struct shared_ptr<msqrd::standalone_tracking::ITrackingController> _xplatController;
    struct shared_ptr<facebook::bufferpool::BufferPool> _pixelBufferPool;
}

+ (id)newWithServiceHost:(id)arg1 xplatController:(shared_ref_401cd246)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)trackNewDataForPresentationTime:(CDStruct_1b6d18a9)arg1;
- (void)updateWithPixelBuffer:(struct __CVBuffer *)arg1 bufferPresentationTime:(CDStruct_1b6d18a9)arg2;
- (id)initWithServiceHost:(id)arg1 xplatController:(shared_ref_401cd246)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

