//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface IGStorableObject : NSObject <NSCoding, NSCopying>
{
    _Bool _assumeImmutablePk;
    NSString *_pk;
}

- (void).cxx_destruct;
@property(copy) NSString *pk; // @synthesize pk=_pk;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)objectStoreWillClear;
- (_Bool)configureWithPk:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)assumeImmutablePk;
- (id)initWithPk:(id)arg1;
- (id)init;

@end

