//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber, NSString;

@interface WamEventIndiaPaymentsDbUserExits : WamEvent
{
    NSNumber *_payments_psp_id_number;
    double _payments_app_exit_selected;
    double _payments_back_selected;
    NSString *_payments_bank_id;
    NSString *_payments_event_id;
}

@property(copy, nonatomic) NSString *payments_event_id; // @synthesize payments_event_id=_payments_event_id;
@property(copy, nonatomic) NSString *payments_bank_id; // @synthesize payments_bank_id=_payments_bank_id;
@property(nonatomic) double payments_back_selected; // @synthesize payments_back_selected=_payments_back_selected;
@property(nonatomic) double payments_app_exit_selected; // @synthesize payments_app_exit_selected=_payments_app_exit_selected;
- (void).cxx_destruct;
@property(nonatomic) long long payments_psp_id;
- (_Bool)is_payments_psp_id_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

