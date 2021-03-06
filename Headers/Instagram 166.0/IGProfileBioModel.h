//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>
#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@class IGProfileBioOverride, IGUser, NSString;
@protocol IGAPIClient;

@interface IGProfileBioModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    IGUser *_user;
    id <IGAPIClient> _networker;
    NSString *_analyticsModule;
    IGProfileBioOverride *_bioOverride;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGProfileBioOverride *bioOverride; // @synthesize bioOverride=_bioOverride;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, copy, nonatomic) IGUser *user; // @synthesize user=_user;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUser:(id)arg1 networker:(id)arg2 analyticsModule:(id)arg3 bioOverride:(id)arg4;

@end

