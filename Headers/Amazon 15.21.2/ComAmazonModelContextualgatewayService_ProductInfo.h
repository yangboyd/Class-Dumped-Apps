//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class ComAmazonModelContextualgatewayService_OfferSummary, ComAmazonModelContextualgatewayService_Price, ComAmazonModelContextualgatewayService_ProductId, ComAmazonModelContextualgatewayService_ProductQuestions, ComAmazonModelContextualgatewayService_ShippingInfo, NSArray, NSNumber, NSString;

@interface ComAmazonModelContextualgatewayService_ProductInfo : CoralModel <NSCoding, NSCopying>
{
    NSString *_description;
    ComAmazonModelContextualgatewayService_ProductId *_productId;
    NSString *_title;
    NSString *_manufacturer;
    NSString *_merchantName;
    NSString *_imageUrl;
    NSString *_thumbnailImageUrl;
    NSString *_variationalParentAsin;
    NSNumber *_hasStockOnHand;
    NSNumber *_isPrimeEligible;
    NSNumber *_numFullStars;
    NSNumber *_hasHalfStar;
    NSNumber *_displayAverageRating;
    NSNumber *_totalReviewCount;
    ComAmazonModelContextualgatewayService_OfferSummary *_offerSummary;
    ComAmazonModelContextualgatewayService_Price *_buyingPrice;
    ComAmazonModelContextualgatewayService_Price *_listPrice;
    ComAmazonModelContextualgatewayService_ShippingInfo *_shippingInfo;
    NSArray *_badges;
    ComAmazonModelContextualgatewayService_ProductQuestions *_questions;
}

+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(retain, nonatomic) ComAmazonModelContextualgatewayService_ProductQuestions *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) NSArray *badges; // @synthesize badges=_badges;
@property(retain, nonatomic) ComAmazonModelContextualgatewayService_ShippingInfo *shippingInfo; // @synthesize shippingInfo=_shippingInfo;
@property(retain, nonatomic) ComAmazonModelContextualgatewayService_Price *listPrice; // @synthesize listPrice=_listPrice;
@property(retain, nonatomic) ComAmazonModelContextualgatewayService_Price *buyingPrice; // @synthesize buyingPrice=_buyingPrice;
@property(retain, nonatomic) ComAmazonModelContextualgatewayService_OfferSummary *offerSummary; // @synthesize offerSummary=_offerSummary;
@property(retain, nonatomic) NSNumber *totalReviewCount; // @synthesize totalReviewCount=_totalReviewCount;
@property(retain, nonatomic) NSNumber *displayAverageRating; // @synthesize displayAverageRating=_displayAverageRating;
@property(retain, nonatomic) NSNumber *hasHalfStar; // @synthesize hasHalfStar=_hasHalfStar;
@property(retain, nonatomic) NSNumber *numFullStars; // @synthesize numFullStars=_numFullStars;
@property(retain, nonatomic) NSNumber *isPrimeEligible; // @synthesize isPrimeEligible=_isPrimeEligible;
@property(retain, nonatomic) NSNumber *hasStockOnHand; // @synthesize hasStockOnHand=_hasStockOnHand;
@property(copy, nonatomic) NSString *variationalParentAsin; // @synthesize variationalParentAsin=_variationalParentAsin;
@property(copy, nonatomic) NSString *thumbnailImageUrl; // @synthesize thumbnailImageUrl=_thumbnailImageUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *merchantName; // @synthesize merchantName=_merchantName;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ComAmazonModelContextualgatewayService_ProductId *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
- (void).cxx_destruct;

@end

