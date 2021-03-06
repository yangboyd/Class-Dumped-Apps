//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WamEvent.h>

@class NSNumber, NSString;

@interface WamEventRegistrationComplete : WamEvent
{
    NSNumber *_registration_contacts_permission_source_number;
    NSNumber *_registration_google_drive_backup_status_number;
    NSNumber *_registration_storage_permission_source_number;
    double _registration_t;
    double _registration_t_for_fill_business_info_screen;
    NSString *_device_identifier;
    double _registration_attempt_skip_with_no_vertical;
    double _registration_profile_picture_set;
    double _registration_profile_picture_tapped;
    double _registration_retry_fetching_biz_profile;
}

- (void).cxx_destruct;
@property(nonatomic) double registration_retry_fetching_biz_profile; // @synthesize registration_retry_fetching_biz_profile=_registration_retry_fetching_biz_profile;
@property(nonatomic) double registration_profile_picture_tapped; // @synthesize registration_profile_picture_tapped=_registration_profile_picture_tapped;
@property(nonatomic) double registration_profile_picture_set; // @synthesize registration_profile_picture_set=_registration_profile_picture_set;
@property(nonatomic) double registration_attempt_skip_with_no_vertical; // @synthesize registration_attempt_skip_with_no_vertical=_registration_attempt_skip_with_no_vertical;
@property(copy, nonatomic) NSString *device_identifier; // @synthesize device_identifier=_device_identifier;
@property(nonatomic) double registration_t_for_fill_business_info_screen_milliseconds; // @synthesize registration_t_for_fill_business_info_screen_milliseconds=_registration_t_for_fill_business_info_screen;
@property(nonatomic) double registration_t_milliseconds; // @synthesize registration_t_milliseconds=_registration_t;
@property(nonatomic) double registration_t_for_fill_business_info_screen_seconds;
@property(nonatomic) double registration_t_seconds;
@property(nonatomic) long long registration_storage_permission_source;
- (_Bool)is_registration_storage_permission_source_set;
@property(nonatomic) long long registration_google_drive_backup_status;
- (_Bool)is_registration_google_drive_backup_status_set;
@property(nonatomic) long long registration_contacts_permission_source;
- (_Bool)is_registration_contacts_permission_source_set;
- (void)serializeFields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (int)getChannel;
- (id)init;

@end

