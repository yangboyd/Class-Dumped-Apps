//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GAVPDFFormFillingVC, NSURL;
@protocol GAVFileInfo;

@protocol GAVPDFFormFillingVCDelegate
- (void)didTapCloseButtonForFormFillingVC:(GAVPDFFormFillingVC *)arg1;
- (void)formFillingVC:(GAVPDFFormFillingVC *)arg1 didFinishFillingFormForFile:(id <GAVFileInfo>)arg2 localFileURL:(NSURL *)arg3 shouldOverwriteFile:(_Bool)arg4;
@end

