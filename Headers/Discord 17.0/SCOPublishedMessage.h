//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class NSString, SCOAccessPolicy, SCOMessage, SCOOptInStateFilter, SCORichAccessKeyGenerationOption, SCOTokenExchangeStrategy;

@interface SCOPublishedMessage : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;
- (id)initWithPublicationParams:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SCOAccessPolicy *accessPolicy; // @dynamic accessPolicy;
@property(nonatomic) _Bool hasAccessPolicy; // @dynamic hasAccessPolicy;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasOptInStateFilter; // @dynamic hasOptInStateFilter;
@property(nonatomic) _Bool hasRichAccessKeyGenerationOption; // @dynamic hasRichAccessKeyGenerationOption;
@property(nonatomic) _Bool hasTokenExchangeStrategy; // @dynamic hasTokenExchangeStrategy;
@property(retain, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCOMessage *message; // @dynamic message;
@property(retain, nonatomic) SCOOptInStateFilter *optInStateFilter; // @dynamic optInStateFilter;
@property(retain, nonatomic) SCORichAccessKeyGenerationOption *richAccessKeyGenerationOption; // @dynamic richAccessKeyGenerationOption;
@property(retain, nonatomic) SCOTokenExchangeStrategy *tokenExchangeStrategy; // @dynamic tokenExchangeStrategy;

@end

