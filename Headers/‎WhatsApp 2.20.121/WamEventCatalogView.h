//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber, NSString;

@interface WamEventCatalogView : WamEvent
{
    NSNumber *_catalog_entry_point_number;
    NSNumber *_catalog_view_action_number;
    NSNumber *_deep_link_open_from_number;
    double _catalog_event_sampled;
    NSString *_catalog_owner_jid;
    NSString *_catalog_report_reason_code;
    NSString *_catalog_session_id;
    double _is_new_product_added_to_cart;
    double _is_order_msg_attached;
    NSString *_order_id;
    NSString *_product_id;
    double _quantity;
}

- (void).cxx_destruct;
@property(nonatomic) double quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
@property(copy, nonatomic) NSString *order_id; // @synthesize order_id=_order_id;
@property(nonatomic) double is_order_msg_attached; // @synthesize is_order_msg_attached=_is_order_msg_attached;
@property(nonatomic) double is_new_product_added_to_cart; // @synthesize is_new_product_added_to_cart=_is_new_product_added_to_cart;
@property(copy, nonatomic) NSString *catalog_session_id; // @synthesize catalog_session_id=_catalog_session_id;
@property(copy, nonatomic) NSString *catalog_report_reason_code; // @synthesize catalog_report_reason_code=_catalog_report_reason_code;
@property(copy, nonatomic) NSString *catalog_owner_jid; // @synthesize catalog_owner_jid=_catalog_owner_jid;
@property(nonatomic) double catalog_event_sampled; // @synthesize catalog_event_sampled=_catalog_event_sampled;
@property(nonatomic) long long deep_link_open_from;
- (_Bool)is_deep_link_open_from_set;
@property(nonatomic) long long catalog_view_action;
- (_Bool)is_catalog_view_action_set;
@property(nonatomic) long long catalog_entry_point;
- (_Bool)is_catalog_entry_point_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

