//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTUserDefaults;

@interface YTClientEventIdController : NSObject
{
    YTUserDefaults *_userDefaults;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)removeClientEventIdForGoogleIds:(id)arg1;
- (id)eventIdKeyFromIdentityId:(id)arg1 visitorData:(id)arg2;
- (void)ssoIdentitiesChanged:(id)arg1;
- (id)getClientEventIdForIdentityId:(id)arg1 visitorData:(id)arg2;
- (void)updateClientEventIdWithSerializedClientEventId:(id)arg1 withIdentityId:(id)arg2 visitorData:(id)arg3;
- (id)init;

@end

