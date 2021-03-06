//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class A9VSFezFileUploader, NSDateFormatter;

@interface A9VSFezEngineTelemetryDataUploader : NSObject
{
    A9VSFezFileUploader *_fileUploader;
    NSDateFormatter *_telemetryFileNameDateFormatter;
}

+ (id)sharedUploader;
@property(readonly, nonatomic) NSDateFormatter *telemetryFileNameDateFormatter; // @synthesize telemetryFileNameDateFormatter=_telemetryFileNameDateFormatter;
@property(readonly, nonatomic) A9VSFezFileUploader *fileUploader; // @synthesize fileUploader=_fileUploader;
- (void).cxx_destruct;
- (void)uploadTelemetryFile:(id)arg1;
- (id)telemetryFileNameWithSuffix:(id)arg1;
- (void)uploadTelemetryData:(id)arg1;
- (id)init;

@end

