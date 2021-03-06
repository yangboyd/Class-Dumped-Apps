//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSString;

@interface WamEventWaPaymentsIdAccountVerification : WamEvent
{
    double _identification_photo_retakes;
    double _identification_submitted;
    double _payments_app_exit_selected;
    double _payments_back_selected;
    double _payments_continue_selected;
    NSString *_payments_country_code;
    NSString *_payments_event_id;
    NSString *_payments_partner_name;
    double _selfie_photo_retakes;
    double _selfie_submitted;
}

- (void).cxx_destruct;
@property(nonatomic) double selfie_submitted; // @synthesize selfie_submitted=_selfie_submitted;
@property(nonatomic) double selfie_photo_retakes; // @synthesize selfie_photo_retakes=_selfie_photo_retakes;
@property(copy, nonatomic) NSString *payments_partner_name; // @synthesize payments_partner_name=_payments_partner_name;
@property(copy, nonatomic) NSString *payments_event_id; // @synthesize payments_event_id=_payments_event_id;
@property(copy, nonatomic) NSString *payments_country_code; // @synthesize payments_country_code=_payments_country_code;
@property(nonatomic) double payments_continue_selected; // @synthesize payments_continue_selected=_payments_continue_selected;
@property(nonatomic) double payments_back_selected; // @synthesize payments_back_selected=_payments_back_selected;
@property(nonatomic) double payments_app_exit_selected; // @synthesize payments_app_exit_selected=_payments_app_exit_selected;
@property(nonatomic) double identification_submitted; // @synthesize identification_submitted=_identification_submitted;
@property(nonatomic) double identification_photo_retakes; // @synthesize identification_photo_retakes=_identification_photo_retakes;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

