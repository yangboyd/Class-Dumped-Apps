//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SMANativeAdData, SMANativeAdImage, SMANativeAdTitle;

@interface SMANativeAssetsJar : NSObject
{
    SMANativeAdTitle *_title;
    SMANativeAdData *_desc;
    SMANativeAdData *_sponsored;
    SMANativeAdData *_cta;
    SMANativeAdData *_rating;
    SMANativeAdData *_likes;
    SMANativeAdData *_downloads;
    SMANativeAdData *_price;
    SMANativeAdData *_salePrice;
    SMANativeAdData *_phone;
    SMANativeAdData *_address;
    SMANativeAdData *_desc2;
    SMANativeAdData *_displayUrl;
    SMANativeAdImage *_icon;
    NSMutableArray *_imageObjects;
}

@property(retain, nonatomic) NSMutableArray *imageObjects; // @synthesize imageObjects=_imageObjects;
@property(retain, nonatomic) SMANativeAdImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) SMANativeAdData *displayUrl; // @synthesize displayUrl=_displayUrl;
@property(retain, nonatomic) SMANativeAdData *desc2; // @synthesize desc2=_desc2;
@property(retain, nonatomic) SMANativeAdData *address; // @synthesize address=_address;
@property(retain, nonatomic) SMANativeAdData *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) SMANativeAdData *salePrice; // @synthesize salePrice=_salePrice;
@property(retain, nonatomic) SMANativeAdData *price; // @synthesize price=_price;
@property(retain, nonatomic) SMANativeAdData *downloads; // @synthesize downloads=_downloads;
@property(retain, nonatomic) SMANativeAdData *likes; // @synthesize likes=_likes;
@property(retain, nonatomic) SMANativeAdData *rating; // @synthesize rating=_rating;
@property(retain, nonatomic) SMANativeAdData *cta; // @synthesize cta=_cta;
@property(retain, nonatomic) SMANativeAdData *sponsored; // @synthesize sponsored=_sponsored;
@property(retain, nonatomic) SMANativeAdData *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) SMANativeAdTitle *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)handleDataUnit:(id)arg1;
- (void)handleVideoUnit:(id)arg1;
- (void)handleImageUnit:(id)arg1;
- (void)handleTitleUnit:(id)arg1;
- (void)buildAssets:(id)arg1;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithNativeAssets:(id)arg1;
- (id)nativeImageFromNativeAdImage:(id)arg1;
- (id)convertedToNativeAssets;

@end

