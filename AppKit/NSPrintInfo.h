//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableDictionary, NSPrinter, NSString;

@interface NSPrintInfo : NSObject <NSCopying, NSCoding>
{
    NSMutableDictionary *_attributes;
    id _moreVars;
}

+ (id)defaultPrinter;
+ (id)sharedPrintInfo;
+ (void)setSharedPrintInfo:(id)arg1;
+ (void)initialize;
+ (struct CGSize)sizeForPaperName:(id)arg1;
+ (void)setDefaultPrinter:(id)arg1;
+ (id)_managedAttributeKeys;
+ (id)_printSettingsAttributeKeys;
+ (id)_pageFormatAttributeKeys;
+ (id)_printSessionAttributeKeys;
+ (id)_jobSavingURLInPrintSession:(struct OpaquePMPrintSession *)arg1 printSettings:(struct OpaquePMPrintSettings *)arg2;
+ (id)_jobDispositionInPrintSession:(struct OpaquePMPrintSession *)arg1 printSettings:(struct OpaquePMPrintSettings *)arg2;
+ (void)_setJobDisposition:(id)arg1 savePath:(id)arg2 inPrintSession:(struct OpaquePMPrintSession *)arg3 printSettings:(struct OpaquePMPrintSettings *)arg4;
+ (void)_setJobDisposition:(id)arg1 saveURL:(id)arg2 inPrintSession:(struct OpaquePMPrintSession *)arg3 printSettings:(struct OpaquePMPrintSettings *)arg4;
+ (void)_setJobDisposition:(id)arg1 format:(id)arg2 saveURL:(id)arg3 inPrintSession:(struct OpaquePMPrintSession *)arg4 printSettings:(struct OpaquePMPrintSettings *)arg5;
+ (unsigned long long)_orientationInPageFormat:(struct OpaquePMPageFormat *)arg1;
+ (id)_paperNameInPageFormat:(struct OpaquePMPageFormat *)arg1;
+ (struct CGSize)_paperSizeInPageFormat:(struct OpaquePMPageFormat *)arg1;
+ (void)_setOrientation:(long long)arg1 inPageFormat:(struct OpaquePMPageFormat *)arg2;
+ (void)_setPaperName:(id)arg1 inPrintSession:(struct OpaquePMPrintSession *)arg2 pageFormat:(struct OpaquePMPageFormat *)arg3;
+ (void)_setPaperSize:(struct CGSize)arg1 inPrintSession:(struct OpaquePMPrintSession *)arg2 pageFormat:(struct OpaquePMPageFormat *)arg3;
+ (id)_printerInPrintSession:(struct OpaquePMPrintSession *)arg1;
+ (void)_setPrinter:(id)arg1 inPrintSession:(struct OpaquePMPrintSession *)arg2;
- (void)takeSettingsFromPDFInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_compatibility_initWithUnkeyedCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateFromPMPrintSettings;
- (void)updateFromPMPageFormat;
- (void *)PMPrintSettings;
- (void *)PMPageFormat;
- (void *)PMPrintSession;
@property(readonly) NSMutableDictionary *printSettings;
@property(readonly) struct CGRect imageablePageBounds;
@property(readonly, copy) NSString *localizedPaperName;
- (void)setUpPrintOperationDefaultValues;
@property(copy) NSPrinter *printer;
@property(getter=isSelectionOnly) BOOL selectionOnly;
@property(copy) NSString *jobDisposition;
@property unsigned long long verticalPagination;
@property unsigned long long horizontalPagination;
@property(getter=isVerticallyCentered) BOOL verticallyCentered;
@property(getter=isHorizontallyCentered) BOOL horizontallyCentered;
@property double bottomMargin;
@property double topMargin;
@property double rightMargin;
@property double leftMargin;
@property double scalingFactor;
@property long long orientation;
@property struct CGSize paperSize;
@property(copy) NSString *paperName;
- (id)dictionary;
- (void)finalize;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)_validatePaginationAttributes;
- (void)_setObject:(id)arg1 ifNoAttributeForKey:(id)arg2;
- (void)_setInt:(int)arg1 ifNoAttributeForKey:(id)arg2;
- (void)_setFloat:(float)arg1 ifNoAttributeForKey:(id)arg2;
- (void)_setBool:(BOOL)arg1 ifNoAttributeForKey:(id)arg2;
- (id)_initWithAttributesNoCopy:(id)arg1 flattenedPageFormatData:(id)arg2 printSettingsData:(id)arg3;
- (void)_setAttributesNoCopy:(id)arg1 pageFormat:(struct OpaquePMPageFormat *)arg2 orFlattenedData:(id)arg3 printSettings:(struct OpaquePMPrintSettings *)arg4 orFlattenedData:(id)arg5;
- (void)_setPrintSettings:(struct OpaquePMPrintSettings *)arg1;
- (void)_setPageFormat:(struct OpaquePMPageFormat *)arg1;
- (struct OpaquePMPrintSettings *)_printSettings;
- (struct OpaquePMPageFormat *)_pageFormat;
- (struct OpaquePMPrintSession *)_printSession;
- (id)_makePDFInfo;
- (void)_setPrintInfo:(id)arg1;
- (void)_printSettingsWasEdited;
- (void)_pageFormatWasEdited;
- (struct OpaquePMPrintSettings *)_printSettingsForSetting;
- (struct OpaquePMPageFormat *)_pageFormatForSetting;
- (struct OpaquePMPrintSession *)_printSessionForSetting;
- (struct OpaquePMPrintSettings *)_printSettingsForGetting;
- (struct OpaquePMPageFormat *)_pageFormatForGetting;
- (struct OpaquePMPrintSession *)_printSessionForGetting;
- (void)_createDefaultOrUnflattenPrintSettingsIfNecessary;
- (void)_createDefaultOrUnflattenPageFormatIfNecessary;
- (void)_removeObjectForAttributeKey:(id)arg1;
- (void)_setObject:(id)arg1 forAttributeKey:(id)arg2;
- (id)_objectForAttributeKey:(id)arg1;
- (id)_allAttributeKeys;
- (void)_reconcilePrintSettingsAttributes;
- (void)_reconcilePageFormatAttributes;
- (void)_reconcilePrintSessionAttributes;

@end

