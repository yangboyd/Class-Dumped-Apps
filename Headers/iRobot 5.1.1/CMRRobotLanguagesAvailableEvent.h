//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRAssetEvent.h>

@interface CMRRobotLanguagesAvailableEvent : CMRAssetEvent
{
    struct Handle<std::__1::shared_ptr<core::RobotLanguagesAvailableEvent>, std::__1::shared_ptr<core::RobotLanguagesAvailableEvent>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)forcedPublish;
- (long long)eventType;
- (_Bool)equals:(id)arg1;
- (id)key;
- (id)timestamp;
- (id)assetId;
- (id)getLanguages;
- (const shared_ptr_cab86c2f *)cppRef;
- (id)initWithCpp:(const shared_ptr_cab86c2f *)arg1;

@end

