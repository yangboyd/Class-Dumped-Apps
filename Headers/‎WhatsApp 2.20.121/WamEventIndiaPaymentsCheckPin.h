//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber, NSString;

@interface WamEventIndiaPaymentsCheckPin : WamEvent
{
    NSNumber *_check_pin_user_error_reason_number;
    NSNumber *_payments_psp_id_number;
    NSNumber *_payments_response_result_number;
    NSString *_payments_bank_id;
    NSString *_payments_error_code;
    NSString *_payments_error_text;
    NSString *_payments_event_id;
    double _payments_response_byte_size;
    double _payments_response_rtt;
    double _retry_count;
}

- (void).cxx_destruct;
@property(nonatomic) double retry_count; // @synthesize retry_count=_retry_count;
@property(nonatomic) double payments_response_rtt; // @synthesize payments_response_rtt=_payments_response_rtt;
@property(nonatomic) double payments_response_byte_size; // @synthesize payments_response_byte_size=_payments_response_byte_size;
@property(copy, nonatomic) NSString *payments_event_id; // @synthesize payments_event_id=_payments_event_id;
@property(copy, nonatomic) NSString *payments_error_text; // @synthesize payments_error_text=_payments_error_text;
@property(copy, nonatomic) NSString *payments_error_code; // @synthesize payments_error_code=_payments_error_code;
@property(copy, nonatomic) NSString *payments_bank_id; // @synthesize payments_bank_id=_payments_bank_id;
@property(nonatomic) long long payments_response_result;
- (_Bool)is_payments_response_result_set;
@property(nonatomic) long long payments_psp_id;
- (_Bool)is_payments_psp_id_set;
@property(nonatomic) long long check_pin_user_error_reason;
- (_Bool)is_check_pin_user_error_reason_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

