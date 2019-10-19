//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseDataObject.h"

@class NSNumber, NSString, NSURL;

@interface FVRDeliveryFeedItem : FVRBaseDataObject
{
    NSString *_gigId;
    NSNumber *_price;
    NSNumber *_isFeatured;
    NSNumber *_sellerId;
    NSNumber *_sellerLevel;
    NSNumber *_subCategoryId;
    NSURL *_image;
    NSURL *_sellerImage;
    NSURL *_url;
    NSURL *_deliveryUrl;
    NSURL *_videoThumb;
    NSURL *_videoUrl;
    NSString *_sellerName;
    NSString *_categoryName;
    NSString *_subCategoryName;
    NSString *_title;
    NSString *_sellerCountry;
    NSString *_deliveryShortUrl;
    NSString *_cachedSlug;
}

@property(copy, nonatomic) NSString *cachedSlug; // @synthesize cachedSlug=_cachedSlug;
@property(copy, nonatomic) NSString *deliveryShortUrl; // @synthesize deliveryShortUrl=_deliveryShortUrl;
@property(copy, nonatomic) NSString *sellerCountry; // @synthesize sellerCountry=_sellerCountry;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *subCategoryName; // @synthesize subCategoryName=_subCategoryName;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *sellerName; // @synthesize sellerName=_sellerName;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSURL *videoThumb; // @synthesize videoThumb=_videoThumb;
@property(retain, nonatomic) NSURL *deliveryUrl; // @synthesize deliveryUrl=_deliveryUrl;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSURL *sellerImage; // @synthesize sellerImage=_sellerImage;
@property(retain, nonatomic) NSURL *image; // @synthesize image=_image;
@property(retain, nonatomic) NSNumber *subCategoryId; // @synthesize subCategoryId=_subCategoryId;
@property(retain, nonatomic) NSNumber *sellerLevel; // @synthesize sellerLevel=_sellerLevel;
@property(retain, nonatomic) NSNumber *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSNumber *isFeatured; // @synthesize isFeatured=_isFeatured;
@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *gigId; // @synthesize gigId=_gigId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithElement:(id)arg1;

@end

