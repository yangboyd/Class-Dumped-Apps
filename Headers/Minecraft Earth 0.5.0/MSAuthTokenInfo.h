//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface MSAuthTokenInfo : NSObject <NSCoding>
{
    NSString *_accountId;
    NSString *_authToken;
    NSDate *_startTime;
    NSDate *_expiresOn;
}

@property(readonly, nonatomic) NSDate *expiresOn; // @synthesize expiresOn=_expiresOn;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(readonly, copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthToken:(id)arg1 accountId:(id)arg2 startTime:(id)arg3 expiresOn:(id)arg4;

@end

