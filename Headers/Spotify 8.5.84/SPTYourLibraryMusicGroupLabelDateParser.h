//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPYourLibraryMusicGroupLabelParser-Protocol.h"

@class NSDateFormatter, NSString;

@interface SPTYourLibraryMusicGroupLabelDateParser : NSObject <STPYourLibraryMusicGroupLabelParser>
{
    NSDateFormatter *_dateFormatterParse;
    NSDateFormatter *_outputDateFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *outputDateFormatter; // @synthesize outputDateFormatter=_outputDateFormatter;
@property(retain, nonatomic) NSDateFormatter *dateFormatterParse; // @synthesize dateFormatterParse=_dateFormatterParse;
- (id)parse:(id)arg1;
@property(readonly, copy, nonatomic) NSString *prefix; // @dynamic prefix;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

