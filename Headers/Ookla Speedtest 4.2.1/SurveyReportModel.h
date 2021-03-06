//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpeedTestEngine/EncodableObject.h>

@class NSString, ReportDeviceModel, ResultReportAppData, ResultReportUserData, ResultSurveyData, SurveyConfigModel;

@interface SurveyReportModel : EncodableObject
{
    NSString *_guid;
    unsigned long long _schemaRevision;
    ResultReportAppData *_app;
    ResultReportUserData *_user;
    ReportDeviceModel *_device;
    SurveyConfigModel *_config;
    ResultSurveyData *_survey;
}

@property(copy, nonatomic) ResultSurveyData *survey; // @synthesize survey=_survey;
@property(copy, nonatomic) SurveyConfigModel *config; // @synthesize config=_config;
@property(copy, nonatomic) ReportDeviceModel *device; // @synthesize device=_device;
@property(copy, nonatomic) ResultReportUserData *user; // @synthesize user=_user;
@property(copy, nonatomic) ResultReportAppData *app; // @synthesize app=_app;
@property(nonatomic) unsigned long long schemaRevision; // @synthesize schemaRevision=_schemaRevision;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;
- (id)init;

@end

