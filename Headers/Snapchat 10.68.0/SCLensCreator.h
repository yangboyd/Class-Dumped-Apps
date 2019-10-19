//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensCreator-Protocol.h"

@class NSString;

@interface SCLensCreator : NSObject <SCLensCreator>
{
    _Bool _snapProIsDeactivated;
    _Bool _isOfficialCreator;
    NSString *_userId;
    NSString *_userAvatarId;
    NSString *_userSelfieId;
    NSString *_snapProIdentifier;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) _Bool isOfficialCreator; // @synthesize isOfficialCreator=_isOfficialCreator;
@property(readonly, nonatomic) _Bool snapProIsDeactivated; // @synthesize snapProIsDeactivated=_snapProIsDeactivated;
@property(readonly, copy, nonatomic) NSString *snapProIdentifier; // @synthesize snapProIdentifier=_snapProIdentifier;
@property(readonly, copy, nonatomic) NSString *userSelfieId; // @synthesize userSelfieId=_userSelfieId;
@property(readonly, copy, nonatomic) NSString *userAvatarId; // @synthesize userAvatarId=_userAvatarId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 userAvatarId:(id)arg2 userSelfieId:(id)arg3 snapProIdentifier:(id)arg4 snapProIsDeactivated:(_Bool)arg5 isOfficialCreator:(_Bool)arg6;
- (id)snapProIdentifierIfActivated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

