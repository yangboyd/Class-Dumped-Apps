//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;
@protocol GBTClient, JBTImage, JBTSmartMailAction;

@interface GBTSmartMailCardViewModelLineItem : NSObject
{
    id <JBTSmartMailAction> _action;
    NSAttributedString *_attributedText;
    NSString *_text;
    NSString *_accessibilityText;
    long long _type;
    NSString *_imageName;
    unsigned long long _numberOfLines;
    id <JBTImage> _networkImage;
    id <GBTClient> _client;
}

+ (id)lineItemWithObject:(id)arg1 ofType:(long long)arg2 client:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GBTClient> client; // @synthesize client=_client;
@property(retain, nonatomic) id <JBTImage> networkImage; // @synthesize networkImage=_networkImage;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) id <JBTSmartMailAction> action; // @synthesize action=_action;
- (id)initWithClient:(id)arg1;

@end

