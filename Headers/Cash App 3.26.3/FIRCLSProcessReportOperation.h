//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FIRCLSInternalReport, FIRCLSSymbolResolver;

@interface FIRCLSProcessReportOperation : NSOperation
{
    FIRCLSSymbolResolver *_symbolResolver;
    FIRCLSInternalReport *_report;
}

@property(readonly, nonatomic) FIRCLSInternalReport *report; // @synthesize report=_report;
@property(readonly, nonatomic) FIRCLSSymbolResolver *symbolResolver; // @synthesize symbolResolver=_symbolResolver;
- (void).cxx_destruct;
- (void)main;
- (_Bool)symbolicateFile:(id)arg1 withResolver:(id)arg2;
- (id)threadArrayFromFile:(id)arg1;
- (id)binaryImagePath;
- (id)initWithReport:(id)arg1 resolver:(id)arg2;

@end

