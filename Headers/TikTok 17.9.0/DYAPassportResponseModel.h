//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class DYASecurityTicketModel, NSDictionary, NSNumber, NSString, UIImage;

@interface DYAPassportResponseModel : MTLModel <MTLJSONSerializing>
{
    UIImage *_captcha;
    NSString *_desc;
    NSString *_name;
    NSNumber *_errorCode;
    NSString *_message;
    DYASecurityTicketModel *_ticketModel;
    NSDictionary *_OAuthInfo;
}

+ (id)captchaJSONTransformer;
+ (id)additionJSONKeyValueDictionary:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *OAuthInfo; // @synthesize OAuthInfo=_OAuthInfo;
@property(retain, nonatomic) DYASecurityTicketModel *ticketModel; // @synthesize ticketModel=_ticketModel;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UIImage *captcha; // @synthesize captcha=_captcha;
- (_Bool)isSessionExpired;
- (_Bool)isRequestSuccess;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

