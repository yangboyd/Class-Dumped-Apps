//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AMZNWorkflowToken : NSObject
{
    NSString *_stringValue;
    NSString *_clientID;
    NSArray *_scopes;
    NSArray *_workflowEndpoints;
}

+ (id)tokenFromJWT:(id)arg1;
@property(retain, nonatomic) NSArray *workflowEndpoints; // @synthesize workflowEndpoints=_workflowEndpoints;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (id)normalizeURL:(id)arg1;
- (void)extractPayload:(id)arg1;
- (_Bool)verifyPayload:(id)arg1;
- (_Bool)isWhitelistedURL:(id)arg1;
- (id)initWithJWT:(id)arg1;

@end

