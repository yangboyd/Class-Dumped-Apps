//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUILolomoViewModelOperation.h"

@class NFUILolomoRequest, NSError;

@interface NFUILolomoViewModelFetchOperation : NFUILolomoViewModelOperation
{
    _Bool _refreshEnitiesOnly;
    NSError *_lastError;
    NFUILolomoRequest *_currentRequest;
}

@property(retain, nonatomic) NFUILolomoRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(nonatomic) _Bool refreshEnitiesOnly; // @synthesize refreshEnitiesOnly=_refreshEnitiesOnly;
- (void).cxx_destruct;
- (void)main;
- (void)executeWithDataSource:(id)arg1 request:(id)arg2;
- (void)handleDataSourceCompletion:(id)arg1 error:(id)arg2;

@end

