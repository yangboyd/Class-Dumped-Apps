//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBDbxSiblingInfo : NSObject
{
    NSString *_uid;
    NSString *_email;
    NSString *_role;
}

+ (id)dbxSiblingInfoWithUid:(id)arg1 email:(id)arg2 role:(id)arg3;
@property(readonly, nonatomic) NSString *role; // @synthesize role=_role;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUid:(id)arg1 email:(id)arg2 role:(id)arg3;

@end

