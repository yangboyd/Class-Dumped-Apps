//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PSPDFCheckboxSectionModel, PSPDFDocumentSharingContext, PSPDFSectionModel;

@interface PSPDFDocumentSharingTableViewData : NSObject
{
    PSPDFSectionModel *_fileOptionSection;
    PSPDFSectionModel *_pageRangeSection;
    PSPDFCheckboxSectionModel *_annotationSection;
    PSPDFSectionModel *_commitSection;
    NSArray *_sections;
    PSPDFDocumentSharingContext *_sharingContext;
}

@property(retain, nonatomic) PSPDFDocumentSharingContext *sharingContext; // @synthesize sharingContext=_sharingContext;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) PSPDFSectionModel *commitSection; // @synthesize commitSection=_commitSection;
@property(retain, nonatomic) PSPDFCheckboxSectionModel *annotationSection; // @synthesize annotationSection=_annotationSection;
@property(retain, nonatomic) PSPDFSectionModel *pageRangeSection; // @synthesize pageRangeSection=_pageRangeSection;
@property(retain, nonatomic) PSPDFSectionModel *fileOptionSection; // @synthesize fileOptionSection=_fileOptionSection;
- (void).cxx_destruct;
- (id)description;
- (long long)sectionIndexForCommitSection;
- (void)updateTableViewDataForConfiguration:(id)arg1 withSharingState:(id)arg2;
- (id)initWithSharingContext:(id)arg1;

@end

