from pathlib import Path
from reportlab.lib.pagesizes import A4
from reportlab.platypus import SimpleDocTemplate, Paragraph, Spacer
from reportlab.lib.styles import getSampleStyleSheet

src = Path(r'd:\Documents\Coding\DSA Love Babbar\Exam_Notes_ML_Syllabus_Unitwise.md')
out = src.with_suffix('.pdf')
text = src.read_text(encoding='utf-8')
styles = getSampleStyleSheet()
styles['Normal'].fontName = 'Helvetica'
styles['Normal'].fontSize = 10
styles['Title'].fontName = 'Helvetica-Bold'
styles['Title'].fontSize = 18
styles['Heading1'].fontName = 'Helvetica-Bold'
styles['Heading1'].fontSize = 14
styles['Heading2'].fontName = 'Helvetica-Bold'
styles['Heading2'].fontSize = 12
styles['Heading3'].fontName = 'Helvetica-Bold'
styles['Heading3'].fontSize = 11

story = []
story.append(Paragraph('Machine Learning Unit-wise Exam Notes', styles['Title']))
story.append(Spacer(1, 10))
for raw_line in text.splitlines():
    line = raw_line.rstrip()
    if not line.strip():
        story.append(Spacer(1, 6))
    elif line.startswith('`'):
        continue
    elif line.startswith('# '):
        story.append(Paragraph(line[2:].strip(), styles['Title']))
        story.append(Spacer(1, 6))
    elif line.startswith('## '):
        story.append(Paragraph(line[3:].strip(), styles['Heading1']))
        story.append(Spacer(1, 4))
    elif line.startswith('### '):
        story.append(Paragraph(line[4:].strip(), styles['Heading2']))
        story.append(Spacer(1, 2))
    elif line.startswith('- '):
        story.append(Paragraph(f'• {line[2:].strip()}', styles['Normal']))
    elif line.startswith('  - '):
        story.append(Paragraph(f'  • {line[4:].strip()}', styles['Normal']))
    else:
        story.append(Paragraph(line.strip(), styles['Normal']))

doc = SimpleDocTemplate(str(out), pagesize=A4, rightMargin=36, leftMargin=36, topMargin=36, bottomMargin=36)
doc.build(story)
print(out)
