//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEDynamicModelObject-Protocol.h"

@class NSString;
@protocol HMEUnifiedDevice;

@interface HMEUnifiedDeviceWrapper : NSObject <HMEDynamicModelObject>
{
    id <HMEUnifiedDevice> _device;
}

+ (id)unifiedDeviceWrapperFromUnifiedDevice:(id)arg1;
- (void).cxx_destruct;
@property(readonly) id <HMEUnifiedDevice> device; // @synthesize device=_device;
@property(readonly, copy) NSString *description;
- (id)initWithUnifiedDevice:(id)arg1;
- (_Bool)identityIsEqualTo:(id)arg1;
- (_Bool)contentIsEqualTo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

