//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEntityDescription;

@interface CREntityMetadata : NSObject
{
    NSEntityDescription *_entity;
}

@property __weak NSEntityDescription *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (_Bool)attributeIsOptionalForAttributeKey:(id)arg1;
- (_Bool)appAttributeFlagForAttributeKey:(id)arg1;
- (_Bool)sessionAttributeFlagForAttributeKey:(id)arg1;
- (id)payloadTypeForAttributeList:(id)arg1;
- (id)payloadTypeForAttribute:(id)arg1;
- (id)payloadKeyNameForAttribute:(id)arg1;
- (id)descriptionForAttribute:(id)arg1;
- (id)protocolType;
- (_Bool)isDhubEvent;
- (id)attributesByName;
- (id)entityUserInfo;
- (id)initWithEntity:(id)arg1;

@end

