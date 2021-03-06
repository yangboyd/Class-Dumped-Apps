//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class HTSLiveDisplayTextModel, NSNumber, NSString;

@interface IESLiveShareResponseModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_intimacy;
    HTSLiveDisplayTextModel *_displayText;
}

+ (id)displayTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) HTSLiveDisplayTextModel *displayText; // @synthesize displayText=_displayText;
@property(retain, nonatomic) NSNumber *intimacy; // @synthesize intimacy=_intimacy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

