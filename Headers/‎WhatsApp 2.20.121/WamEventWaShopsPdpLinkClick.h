//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@interface WamEventWaShopsPdpLinkClick : WamEvent
{
    double _shops_product_id;
}

@property(nonatomic) double shops_product_id; // @synthesize shops_product_id=_shops_product_id;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

