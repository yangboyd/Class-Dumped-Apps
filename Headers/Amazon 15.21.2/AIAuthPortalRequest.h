//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIBackendRequest.h"

@class NSDictionary, NSString;

@interface AIAuthPortalRequest : AIBackendRequest
{
    _Bool _authenticated;
    NSString *_directedId;
    NSString *_assocHandle;
    NSString *_pageId;
    NSDictionary *_extraParameters;
    NSString *_serialNumber;
    NSString *_deviceType;
    NSString *_languageCode;
}

@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) NSString *assocHandle; // @synthesize assocHandle=_assocHandle;
@property(copy, nonatomic) NSString *directedId; // @synthesize directedId=_directedId;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
- (void).cxx_destruct;
- (id)returnURL;
- (id)getAuthPortalParameters;
- (id)createEndpoint;
- (id)createURL;
- (id)initWithDomain:(id)arg1 HTTPMethod:(id)arg2 directedId:(id)arg3 assocHandle:(id)arg4 pageId:(id)arg5 extraParameters:(id)arg6 serialNumber:(id)arg7 deviceType:(id)arg8 languageCode:(id)arg9 authenticated:(_Bool)arg10;

@end

