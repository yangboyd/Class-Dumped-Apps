//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTextEntryStickerView.h"

@class NSString;

@interface SCSnapRequestStickerView : SCTextEntryStickerView
{
    NSString *_requestId;
}

@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (_Bool)shouldReceiveTapsViaStickerContainer;
- (id)config;
- (id)shortLoggingName;
- (id)loggingParameters;
- (id)stickerId;
- (id)packId;
- (unsigned long long)type;
- (unsigned long long)infoType;
- (id)placeHolderText;
- (id)icon;
- (id)defaultText;

@end

