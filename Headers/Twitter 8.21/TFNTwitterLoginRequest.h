//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TFNTwitterLoginRequest : NSObject
{
    NSString *_loginRequestID;
    NSString *_message;
    double _createdAt;
    NSString *_challenge;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(nonatomic) double createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *loginRequestID; // @synthesize loginRequestID=_loginRequestID;
- (id)initWithDictionary:(id)arg1;

@end

