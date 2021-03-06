//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GMVDownloadEvent, GMVImageAnalysisEvent, GMVInitializationEvent;

@interface GMVVisionExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMVDownloadEvent *downloadEvent; // @dynamic downloadEvent;
@property(nonatomic) _Bool hasDownloadEvent; // @dynamic hasDownloadEvent;
@property(nonatomic) _Bool hasImageAnalysisEvent; // @dynamic hasImageAnalysisEvent;
@property(nonatomic) _Bool hasInitEvent; // @dynamic hasInitEvent;
@property(nonatomic) _Bool hasLibraryVersionCode; // @dynamic hasLibraryVersionCode;
@property(retain, nonatomic) GMVImageAnalysisEvent *imageAnalysisEvent; // @dynamic imageAnalysisEvent;
@property(retain, nonatomic) GMVInitializationEvent *initEvent; // @dynamic initEvent;
@property(nonatomic) int libraryVersionCode; // @dynamic libraryVersionCode;

@end

